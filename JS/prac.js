
function createCard(title,cName,views,monthsOld,duration,thumbnail){
    let viewsStr;
    if(views<1000000){
        viewsStr=views/1000 +"K"
    }
    else if(views>=1000000){
        viewsStr=views/1000000 +"M"
    }
    else{
        viewsStr = views / 1000 + "K";
    }
    let html=`<div class="card">
            <div class="image">
                <img src="${thumbnail}" alt=""></img>
                <div class="capsule">${duration}</div>
            </div>
            <div class="text">
                <h1>${title}</h1>
                <p>${cName} . ${viewsStr} views . ${monthsOld} months ago</p>
            </div>
        </div>`
        document.getElementById("container").innerHTML += html;

}
createCard("Installing VS Code & How Websites Work", "CodeWithHarry", 2400000, 11, "31:20", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEcCPYBEIoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLACwWOixJVrKLFindK92kYMgTcQbw");