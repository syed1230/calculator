# calculator
This repository contain the calculator code , the languages used are :-HTM, CSS , JAVA SCRIPT .
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="about.css">
    <title>calculator</title>
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
