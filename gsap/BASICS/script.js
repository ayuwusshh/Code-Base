
//box animation

// gsap.to("#box", {
//   x: 400,
//   duration: 1,
//   delay: 1,
//   rotate:360,
//   backgroundColor:"blue",
//   height:"50px",
//   width:"50px",
//   borderRadius:"50%"
// })
// gsap.from("#box2", {
//   x: 400,
//   duration: 2,
//   delay: 4
// })

//text animation

// gsap.from("h1",{
//   opacity:0,
//   y:50,
//   color:"red",
//   duration:2,
//   delay:1,
//   stagger:0.5 // targets one line at a time 
// })


//  repeat animation

// gsap.to("#box", {
//   x: 400,
//   duration: 1,
//   delay: 1,
//   rotate: 360,
//   repeat:1 ,
//   yoyo:true
// })


//  timeline animation


// var tl = gsap.timeline()
// tl.to("#box", {
//   x: 600,
//   rotate: 360,
//   duration: 1.5,
//   delay: 1
// })
// tl.to("#box2", {
//   x: 600,
//   backgroundColor: "yellow",
//   duration: 1.5,
// })
// tl.to("#box3", {
//   x: 600,
//   scale: 0.5,
//   borderRadius: 50
// })

var tl = gsap.timeline()
tl.from("h2", {
  opacity: 0,
  y: -30,
  duration: 0.5,
  delay: 1,
})
tl.from("h4", {
  y: -30,
  opacity: 0,
  duration: 0.5,
  delay: 1,
  stagger: 0.3
})
tl.from("h1", {
  opacity: 0,
  y: 20,
  duration: 1,
  scale:0.2,
})