class Solution {
public:

    unordered_map<string, string> link_map;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = "http://shrt.com/";

        // current date/time based on current system
        time_t now = time(0);

        // convert now to string form
        string dt = ctime(&now);
        shortUrl += dt;

        link_map[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return link_map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));