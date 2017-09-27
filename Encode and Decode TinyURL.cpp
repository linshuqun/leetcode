class Solution {
public:
    map<string, string> urls;
    
    long long hash(string url) {
        long long h = 0;
        for (int i = 0; i < (int)url.length(); i++) {
            h = h * 10 + url[i];
        }
        return h;
    }
    
    string toString(long long num) {
        string number;
        stringstream strstream;
        strstream << num;
        strstream >> number;
        return number;
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        long long key = hash(longUrl);
        string shortUrl = "http://tinyurl.com/";
        shortUrl += toString(key);
        urls.insert(pair<string, string>(shortUrl, longUrl));
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urls.find(shortUrl)->second;
    }
};
