#include <iostream>
#include <curl/curl.h>

using std::string;
using std::cin;

int main() {



    std::cout << "input id: ";
    string id;
    getline(cin, id);
    CURL *curl = curl_easy_init();
    string s_first_url_part("https://api.vk.com/method/users.get?user_id=");
    string s_last_url_part("&v=5.52");
    string request = s_first_url_part + id + s_last_url_part;
    const char * c = request.c_str();
    if(curl) {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL, c);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    return 0;
}