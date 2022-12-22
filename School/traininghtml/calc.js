function tinh() {
        var a = parseInt(khoa.khoa1.value);
        var b = parseInt(khoa.khoa2.value);
        var tinh = document.getElementById("khoa3").value ;
        // s = eval(a + tinh + b);
        // document.getElementById("khoa5").value = s;
          if(khoa1.value ==""){
          alert('yeu cau nhap so');
          khoa1.focus();
          return false;
       } else if(khoa2.value=="") {
          alert('yeu cau nhap so');
          khoa2.focus();
          return false;
       }
        switch(tinh) {
               case"+":
                s = a+b;
                break;
                case "-":
               s = a-b;
                 break;
               case "*":
               if(khoa1.value || khoa2.value == 0){
                  alert('nhap lai di ong chau oi');
                }else{
                s = a*b;
                }
                break;
               case "/":
                if(khoa1.value || khoa2.value == 0){
                  alert('nhap lai di ong chau oi');
                  khoa1.fucus();
                  khoa2.fucus();
                  return false;
                }else{
                s = a/b;
                }
                break;                
                 case "%":
                s = a%b;
                break;

       }
       document.getElementById("khoa5").value = s ;  
      
 }