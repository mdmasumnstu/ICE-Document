//write word
document.writeln("Hello World <br>");

//condition
var a=34,b=45;
if(a>b)
{
    document.writeln("Max"+a);
}
else{
    document.writeln("Max: "+b);
}


//loop
for(var i=1;i<=a;i++)
{
    document.writeln("<br>"+i);
}

//function
function fact(n) 
{
  var result = 1;
  for (var i = 1; i <= n; i++) 
    {
    result=result*i;
  }
  return result;
}

document.writeln("<br>The Factorial Number: "+fact(5))


//Array
let information=["Masum"," ICE ", " 40 "," BGE "," BMB "];
document.writeln("<br><br>");

document.writeln(information[1] +"<br>"+"<Br>");

for(let i=0;i<5;i++)
{
    document.writeln(information[i]+"<br>");
}

//class
class inform{
    constructor(name,dept)
    {
        this.name=name;
        this.dept=dept;
    }
};
const name1=new inform("Masum","ICE");
document.writeln("Student Name is ${this.name} ${this.dept}");