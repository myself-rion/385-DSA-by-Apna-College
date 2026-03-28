def is_anagram(s: str, t: str) -> bool:
    if len(s) != len(t):
        return False

    store = [0] * 26

    for cs, ct in zip(s, t):
        store[ord(cs) - ord('a')] += 1
        store[ord(ct) - ord('a')] -= 1

    return all(v == 0 for v in store)