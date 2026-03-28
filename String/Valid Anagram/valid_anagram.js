function isAnagram(s, t) {
    if (s.length !== t.length) return false;

    const store = new Array(26).fill(0);
    const a = 'a'.charCodeAt(0);

    for (let i = 0; i < s.length; i++) {
        store[s.charCodeAt(i) - a]++;
        store[t.charCodeAt(i) - a]--;
    }

    return store.every(val => val === 0);
}