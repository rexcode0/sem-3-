#include <stdio.h>
#include <curl/curl.h>

int main()
{
    CURL *curl;
    CURLcode result;

    curl = curl_easy_init();
    if(curl==NULL) 
    {
        fprintf(stderr,"failed");
        return -1;
    }
    curl_easy_setopt(curl,CURLOPT_URL,"https://www.google.com");
    result = curl_easy_perform(curl);
    if(result!=CURLE_OK)
    {
        fprintf(stderr,"error %s \n",curl_easy_strerror(result));
    }
    curl_easy_cleanup(curl);
    return 0;

}

