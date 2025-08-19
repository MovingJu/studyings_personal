let title = document.querySelector(".link");
if (title instanceof HTMLAnchorElement) {
    title.href = "www.naver.com";
}

let btn = document.querySelector("#btn");
let img = document.querySelector("#image");
btn?.addEventListener("click", function(){
    if (img instanceof HTMLImageElement){
       img.src =  "../asssets/changed.png";
    }
})
