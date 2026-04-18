#include<iostream>
#include<curl/curl.h>

using namespace std;

size_t write_callback(void* datos, size_t size, size_t nmemb, void* userp){
    size_t total_size = size * nmemb;
    
    string* str = static_cast<string*>(userp);
    str->append(static_cast<char*>(datos), total_size);
    return total_size;
};

int main(){
    string url = "";
    int deep = 2;
    string html = "";

    cout << "Inserta la URL que quieras Crawlear (https://www.ejemplo.com): " << endl;
    cin >> url;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    CURL* curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &html);
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

    CURLcode res = curl_easy_perform(curl);
    if(res != CURLE_OK){
        cout << "Error: " << curl_easy_strerror(res) << endl;
    };

    curl_easy_cleanup(curl);
    curl_global_cleanup();

    cout << html << endl;
};