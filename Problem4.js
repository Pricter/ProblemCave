function largestPalindrom(n) {
    var palindroms = [];
    var number = +Array(n).fill(9).join('');
    for (var i = number; i >= 1; i--) {
        for (var j = number; j >= 1; j--) {
            var mult = i * j;
            if (isPalindrome(mult)) {
                palindroms.push(mult);
            }
        }
    }
    return Math.max(...palindroms);
}

function isPalindrome(number) {
    return number.toString() === number.toString().split('').reverse().join('');
}

console.log(largestPalindrom(3));