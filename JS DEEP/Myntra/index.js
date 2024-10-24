let bagItems = [];
onLoad();

function onLoad() {
    let bagItemsStr = localStorage.getItem('bagItems');
    bagItems = bagItemsStr ? JSON.parse(bagItemsStr) : [];
    displayItemsOnHomepage();
    displayBagIcon();
}

function addToBag(itemId) {
    // Check if item is already in the bag
    if (!bagItems.includes(itemId)) {
        bagItems.push(itemId);
        localStorage.setItem('bagItems', JSON.stringify(bagItems));
        displayBagIcon();
    } else {
        alert("Item is already in the bag!");
    }
}

function displayBagIcon() {
    let bagItemCountElement = document.querySelector('.bag-item-count');
    if (bagItems.length > 0) {
        bagItemCountElement.innerText = bagItems.length;
        bagItemCountElement.style.visibility = 'visible';
    } else {
        bagItemCountElement.style.visibility = 'hidden';
    }
}

function displayItemsOnHomepage() {
    let itemContainerElement = document.querySelector('.items-container');
    if (!itemContainerElement) {
        return;
    }
    let innerHTML = '';
    items.forEach(item => {
        innerHTML += `<div class="item-container">
                        <img class="item-image" src="${item.image}" alt="item image">
                        <div class="rating">
                            ${item.rating.stars} ⭐ | ${item.rating.count} Reviews
                        </div>
                        <div class="company-name">${item.company}</div>
                        <div class="item-name">${item.item_name}</div>
                        <div class="price">
                            <span class="current-price">₹${item.current_price}</span>
                            <span class="real-price">₹${item.original_price}</span>
                            <span class="discount">${item.discount_percentage}% OFF</span>
                        </div>
                        <button class="add-to-bag" onclick="addToBag(${item.id})">Add to Bag</button>
                    </div>`;
    });
    itemContainerElement.innerHTML = innerHTML;
}
