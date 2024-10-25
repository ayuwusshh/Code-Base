// gsap.from("#page2 #box", {
//   scale: 0,
//   opacity: 0,
//   duration: 1,
//   rotate: 720,
//   // repeat: 4,
//   scrollTrigger: {         //   
//     trigger: "#page2 #box",
//     scroller: "body",
//     markers: true,       //  Show markers when testing

//     start: "top 60%",
//     end: "top 30%",
//     scrub: 5,         // smooth animation
//     pin:true         //target the parent 
//   }
// })

// gsap.from("#page2 h1", {
//   opacity: 0,
//   duration: 2,
//   x: 500,
//   scrollTrigger: {
//     trigger: "#page2 h1",
//     scroller: "body",
//     markers: true,
//     start: "top 50%",
//     end: "bottom top"
//   }
// })
// gsap.from("#page2 h2", {
//   opacity: 0,
//   duration: 2,
//   x: -500,
//   scrollTrigger: {
//     trigger: "#page2 h1",
//     scroller: "body",
//     markers: true,
//     start: "top 50%",
//     end: "bottom top"
//   }
// })
gsap.to("#page2 h1", {
  transform: "translateX(-150%)",
  scrollTrigger: {
    trigger: "#page2",
    scroll: "body",
    markers: true,
    start: "top 0%",
    end: "top -100%",
    scrub: true,
    pin: true
  }
})