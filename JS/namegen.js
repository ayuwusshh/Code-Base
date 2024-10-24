let words = {
    adjectives: {
        opt1: "Sunny",
        opt2: "Bright",
        opt3: "Happy"
    },
    shopName: {
        opt1: "Boutique",
        opt2: "Emporium",
        opt3: "Market" 
    },
    otherWord: {
        opt1: "Corner",
        opt2: "Place",
        opt3: "Spot"
    },
};

function getRandomProperty(obj) {
    let keys = Object.keys(obj);
    return obj[keys[Math.floor(Math.random() * keys.length)]];
}

let randomAdjective = getRandomProperty(words.adjectives);
let randomShopName = getRandomProperty(words.shopName);
let randomOtherWord = getRandomProperty(words.otherWord);

let businessName = randomAdjective + " " + randomShopName + " " + randomOtherWord;
console.log(businessName);
