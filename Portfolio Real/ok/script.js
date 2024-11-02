gsap.registerPlugin(ScrollTrigger);

const cursor = document.querySelector('.cursor');
const cursorFollower = document.querySelector('.cursor-follower');

document.addEventListener('mousemove', (e) => {
    gsap.to(cursor, { duration: 0.1, x: e.clientX, y: e.clientY });
    gsap.to(cursorFollower, { duration: 0.3, x: e.clientX, y: e.clientY });
});

gsap.from("#home h1 .line", {
    y: 200,
    opacity: 0,
    duration: 1,
    stagger: 0.25,
    ease: "power3.out",
});

gsap.from(".subtitle", {
    opacity: 0,
    y: 20,
    duration: 1,
    delay: 1,
    ease: "power3.out",
});

const sections = document.querySelectorAll('section');
sections.forEach((section) => {
    gsap.from(section, {
        opacity: 0,
        y: 50,
        duration: 1,
        scrollTrigger: {
            trigger: section,
            start: "top 80%",
            end: "top 20%",
            scrub: 1,
        },
    });
});

gsap.from(".skill-category", {
    opacity: 0,
    y: 50,
    duration: 1,
    stagger: 0.2,
    scrollTrigger: {
        trigger: "#skills",
        start: "top 80%",
    },
});

gsap.from(".project", {
    opacity: 0,
    y: 50,
    duration: 1,
    stagger: 0.2,
    scrollTrigger: {
        trigger: "#work",
        start: "top 80%",
    },
});

document.querySelectorAll('a[href^="#home"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        const target = document.querySelector(this.getAttribute('href'));
        gsap.to(window, { duration: 1, scrollTo: target, ease: "power2.inOut" });
    });
});

const hoverElements = document.querySelectorAll('a, .project, .skill-category');
hoverElements.forEach((el) => {
    el.addEventListener('mouseenter', () => {
        gsap.to(cursor, { scale: 1.5, duration: 0.3 });
        gsap.to(cursorFollower, { scale: 1.5, duration: 0.3 });
        if (el.classList.contains('project') || el.classList.contains('skill-category')) {
            gsap.to(el, { y: -5, duration: 0.3 });
        }
    });
    el.addEventListener('mouseleave', () => {
        gsap.to(cursor, { scale: 1, duration: 0.3 });
        gsap.to(cursorFollower, { scale: 1, duration: 0.3 });
        if (el.classList.contains('project') || el.classList.contains('skill-category')) {
            gsap.to(el, { y: 0, duration: 0.3 });
        }
    });
});

gsap.to(".profile-image", {
    yPercent: -20,
    ease: "none",
    scrollTrigger: {
        trigger: "#about",
        start: "top bottom",
        end: "bottom top",
        scrub: true
    },
});

const subtitleElement = document.querySelector('.subtitle');
const subtitleText = subtitleElement.innerHTML;
subtitleElement.innerHTML = '';
let i = 0;

function typeWriter() {
    if (i < subtitleText.length) {
        subtitleElement.innerHTML += subtitleText.charAt(i);
        i++;
        setTimeout(typeWriter, 50);
    }
}

window.addEventListener('load', typeWriter);

const skillItems = document.querySelectorAll('.skill-category li');
skillItems.forEach((item, index) => {
    gsap.from(item, {
        opacity: 0,
        x: -20,
        duration: 0.5,
        delay: index * 0.1,
        scrollTrigger: {
            trigger: item,
            start: "top 80%",
        },
    });
});

const links = document.querySelectorAll('nav a, .email-link');
links.forEach(link => {
    link.addEventListener('mouseenter', () => {
        gsap.to(link, { backgroundSize: '100% 2px', duration: 0.3 });
    });
    link.addEventListener('mouseleave', () => {
        gsap.to(link, { backgroundSize: '0% 2px', duration: 0.3 });
    });
});

const progressBar = document.createElement('div');
progressBar.style.position = 'fixed';
progressBar.style.top = '0';
progressBar.style.left = '0';
progressBar.style.height = '3px';
progressBar.style.width = '0';
progressBar.style.backgroundColor = 'var(--accent-color)';
progressBar.style.zIndex = '9999';
document.body.appendChild(progressBar);

window.addEventListener('scroll', () => {
    const scrollPercentage = (window.scrollY / (document.documentElement.scrollHeight - window.innerHeight)) * 100;
    gsap.to(progressBar, { width: `${scrollPercentage}%`, duration: 0.3, ease: 'power2.out' });
});