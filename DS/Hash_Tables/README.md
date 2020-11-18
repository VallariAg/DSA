# Hash Tables

Hash tables are great when you want to
• Create a mapping from one thing to another thing
• Look something up

A good rule of thumb is, resize when your load factor is greater than 0.7.
## Uses
1. Modeling relationships from one thing to another thing (Lookups)
For any website you go to, the address has to be translated to an IP
address. Wow, mapping a web address to an IP address? Sounds like a perfect
use case for hash tables! This process is called DNS resolution. Hash
tables are one way to provide this functionality.
2. Preventing duplicate entries
```
value = voted.get(“tom”)
```
The get function returns the value if “tom” is in the hash table.
Otherwise, it returns None .
3. Caching/memorizing data instead of making your server do work
Here, you make the server do work only if the URL isn’t in the cache.
Before you return the data, though, you save it in the cache. The next
time someone requests this URL, you can send the data from the cache
instead of making the server do the work.
It has two advantages:
• You get the web page a lot faster, just like when you memorized the
distance from Earth to the Moon. The next time your niece asks you,
you won’t have to Google it. You can answer instantly.
• Websites' servers has to do less work.
