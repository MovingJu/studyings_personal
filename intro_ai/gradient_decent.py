import torch

def sigmoid(x: "torch.Tensor"):
    return 1 / (1 + torch.exp(-x))

def sigmoid_derivative(x: "torch.Tensor"):
    return sigmoid(x) * (1 - sigmoid(x))

X = torch.tensor([[0., 0.],
                  [0., 1.],
                  [1., 0.],
                  [1., 1.]])  # (4, 2)
y = torch.tensor([[0.],
                  [1.],
                  [1.],
                  [0.]])  # (4, 1)

torch.manual_seed(0) # type: ignore
W1 = torch.randn((2, 3), dtype=torch.float32)  # input → hidden
b1 = torch.randn((1, 3), dtype=torch.float32)

W2 = torch.randn((3, 1), dtype=torch.float32)  # hidden → output
b2 = torch.randn((1, 1), dtype=torch.float32)

lr = 0.1
epochs = 10000

for epoch in range(epochs):
    ### Forward pass
    z1 = X @ W1 + b1           # (4,3)
    a1 = sigmoid(z1)           # activation (4,3)

    z2 = a1 @ W2 + b2          # (4,1)
    a2 = sigmoid(z2)           # prediction (4,1)

    ### Loss (MSE)
    loss = ((a2 - y) ** 2).sum() / 2

    ### Backward pass
    d_loss_a2 = 2 * (a2 - y) / y.size(0)       # (4,1)
    d_a2_z2 = sigmoid_derivative(z2)           # (4,1)
    d_z2_W2 = a1                               # (4,3)

    d_loss_z2 = d_loss_a2 * d_a2_z2            # (4,1)
    d_loss_W2 = d_z2_W2.T @ d_loss_z2          # (3,1)
    d_loss_b2 = d_loss_z2.sum(0, keepdim=True) # (1,1)

    d_z2_a1 = W2.T                             # (1,3)
    d_loss_a1 = d_loss_z2 @ d_z2_a1            # (4,3)
    d_a1_z1 = sigmoid_derivative(z1)           # (4,3)
    d_z1_W1 = X                                # (4,2)

    d_loss_z1 = d_loss_a1 * d_a1_z1            # (4,3)
    d_loss_W1 = d_z1_W1.T @ d_loss_z1          # (2,3)
    d_loss_b1 = d_loss_z1.sum(0, keepdim=True) # (1,3)

    ### Gradient Descent (update weights)
    W2 -= lr * d_loss_W2
    b2 -= lr * d_loss_b2
    W1 -= lr * d_loss_W1
    b1 -= lr * d_loss_b1

    ### Logging
    if epoch % 1000 == 0:
        print(f"Epoch {epoch}: Loss = {loss.item():.4f}")


with torch.no_grad():
    z1 = X @ W1 + b1
    a1 = sigmoid(z1)
    z2 = a1 @ W2 + b2
    a2 = sigmoid(z2)
    print("Predicted:\n", a2)