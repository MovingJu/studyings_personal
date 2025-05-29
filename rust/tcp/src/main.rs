use askama::Template;
use axum::{routing::get, Router, response::Html};
use std::net::SocketAddr;

#[derive(Template)]
#[template(path = "index.html")]
struct IndexTemplate;

#[tokio::main]
async fn main() {
    let app: Router = Router::new().route("/", get(show_hello));

    let addr: SocketAddr = SocketAddr::from(([127, 0, 0, 1], 3000));
    println!("서버 실행 중: http://{}", addr);

    // ✅ axum 0.7은 여기서 직접 bind + serve 가능함!
    axum::serve(
        tokio::net::TcpListener::bind(addr).await.unwrap(),
        app.into_make_service(),
    )
    .await 
    .unwrap();
}

async fn show_hello() -> Html<String> {
    let html = IndexTemplate.render().unwrap();
    Html(html)
}
