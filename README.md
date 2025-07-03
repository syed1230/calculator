# calculator
This repository contain the calculator code , the languages used are :-HTM, CSS , JAVA SCRIPT .
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="about.css">
    <title>calculator</title>
    <style>
        body {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background: #738146;
    font-family: Arial, sans-serif;
  }

  .calculator {
    background: rgb(168, 175, 124);
    padding:30px;
    border-radius: 10px;
    box-shadow: 0 4px 10px rgba(14, 13, 13, 0.1);
  }
h1{
    font-family: 'Times New Roman', Times, serif;
}
h1:hover{
    color:rgb(241, 237, 237);
    background-color: #101010;
    border-radius: 5px;
}
#display {
width: 94%;
height: 40px;
font-size: 20px;
margin-bottom: 10px;
text-align: right;
padding: 10px;
border: 1px solid #515d06;
border-radius: 5px;
}

.buttons {
display: grid;
grid-template-columns: repeat(4, 60px);
gap: 10px;
}

button {
padding: 15px;
font-size: 20px;
border: none;
border-radius: 5px;
cursor:auto;
background-color: #eee;
transition: background-color 0.2s;
}

button:hover {
background-color: #151515ac;
color:rgb(235, 229, 223)
}

.operator {
background-color: #d5d4d1;
}

.equal {
background-color: #f6faf3;
}

.clear {
background-color: #d7ceceae;
color: rgb(15, 15, 15);
}
.backspace {
  background-color: #dddada;
  color: rgb(22, 21, 21); 
}

    </style>
       </head>
<body>
    <div class="calculator">
        <h1>🧮CALCULATOR</h1><br>
        <input type ="text" id="display" disabled >
        <div class="buttons">
            <!-- clear and back option creation here -->
            <button class="clear" onclick="clearDisplay()" style="grid-column: span 4;">Clear</button>
           <!-- make a java script for bakcspace option  -->
            <button class="backspace" onclick="Backspace()" style="grid-column: span 4;">Backspace</button>
        <!-- the numbers=7,8,9 and '/'operator  -->
        <button onclick="append(7)">7</button>
        <button onclick="append(8)">8</button>
        <button onclick="append(9)">9</button>
        <button class="operator"onclick="append('/')">/</button>
<!-- the numbers =4,5,6 and '-' opearator  -->
        <button onclick="append(4)">4</button>
        <button onclick="append(5)">5</button>
        <button onclick="append(6)">6</button>
        <button class="operator"onclick="append('-')">-</button>
        <!-- the number =1,2,3 and '+'opearator -->
        <button onclick="append(1)">1</button>
        <button onclick="append(2)">2</button>
        <button onclick="append(3)">3</button>
        <button class="operator"onclick="append('+')">+</button>
<!-- the number-0 ,'.'value & '='button & '*'opearator -->
        <button onclick="append(0)">0</button>
        <button onclick="append('.')">.</button>
        <button class="equal"onclick="calculate()">=</button>
        <button class="operator"onclick="append('*')">*</button>
</div>
    </div>
    <script>
      //this sis the java script code for the functionality of "clear","backspace","concatenation of numbers and the specifided operations.-->
        // the fuuction for the getting the value 
        function append(value) {
          document.getElementById("display").value += value;
        }
    // the function for clearing the dsplay all clear
        function clearDisplay() {
          document.getElementById("display").value = '';
        }
        // the function for backspace
        function Backspace() {
    const display = document.getElementById('display');
    display.value = display.value.slice(0, -1);
  }
//   the function for the calculation and also the expression handiling
        function calculate() {
          try {
            document.getElementById("display").value = eval(document.getElementById("display").value);
          } catch (e) {
            alert("Invalid Expression");
          }
        }
      </script>
      
</body>
</html>
