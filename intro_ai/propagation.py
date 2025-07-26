import torch
import torch.nn.functional as F

x = torch.tensor([[1.0, 2.0], [3.0, 4.0]], requires_grad=True)  # 입력 (2차원)
y = torch.tensor([[0.0], [1.0]])  # 정답

W1 = torch.randn((2, 3), requires_grad=True)  # input → hidden
b1 = torch.randn((3,), requires_grad=True)

W2 = torch.randn((3, 1), requires_grad=True)  # hidden → output
b2 = torch.randn((1,), requires_grad=True)

# hidden layer (Linear + ReLU)
z1 = x @ W1 + b1
a1 = F.relu(z1)

# output layer (Linear)
y_pred = a1 @ W2 + b2

loss = ((y_pred - y) ** 2).mean()
print("Loss:", loss.item())

loss.backward()

print("∂Loss/∂W1:", W1.grad)
print("∂Loss/∂W2:", W2.grad)


