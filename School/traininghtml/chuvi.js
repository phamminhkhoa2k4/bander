function tinh() {
    var dai = parseFloat(khoa.cdai.value);
    var rong = parseFloat(khoa.crong.value);
    cv = (dai + rong )*2;
    dt = (dai*rong) ;
    document.getElementById("chuvi").value = cv ;  
    document.getElementById("dientich").value = dt ;  
}