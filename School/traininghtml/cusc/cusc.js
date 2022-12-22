// sidebar open close 
let menuOpenbtn = document.querySelector(".navbar .bx-menu");
let closeOpenbtn = document.querySelector(".nav-links .bx-x");
let navLinks = document.querySelector(".nav-links");
menuOpenbtn.addEventListener("click", ()=>{
    navLists.style.left= "0";
});
closeOpenbtn.addEventListener("click", ()=>{
    navLists.style.left= "-100%";
});

let tsArrow = document.querySelector(".ts-arrow");
tsArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show1");  
});
let vlArrow = document.querySelector(".vl-arrow");
vlArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show1");  
});
let dtqtArrow = document.querySelector(".dtqt-arrow");
dtqtArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show2");  
});
let dtnhArrow = document.querySelector(".dtnh-arrow");
dtnhArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show3");  
});
let dttycArrow = document.querySelector(".dttyc-arrow");
dttycArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show4");  
});
let gvArrow = document.querySelector(".gv-arrow");
gvArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show5");  
});
let gvuArrow = document.querySelector(".gvu-arrow");
gvuArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show6");  
});
let tgtbArrow = document.querySelector(".tgtb-arrow");
tgtbArrow.addEventListener("click", ()=>{
  navLists.classList.toggle("show7");  
});
