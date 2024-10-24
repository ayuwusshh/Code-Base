let button = document.getElementById("btn")
console.log();
// list of all mouse events ->
//https://developer.mozilla.org/en-US/docs/Web/API/Element#mouse_events
button.addEventListener("dblclick", ()=>{
    document.querySelector(".box").innerHTML="Yayy!!! You're clicked" // changes the value on double click 
})

document.addEventListener("contextmenu", ()=>{ // fires on right click
alert("Dont try to hack me!!")
})
document.addEventListener("keydown", (e)=>{     // gives the key code 
    console.log(e.key, e.keyCode)
})