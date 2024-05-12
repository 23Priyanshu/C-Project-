#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Prompt the user for the video URL
    string video_url;
    cout << "COPY AND PASTE ANY URL WHICH U WANT TO CONVERT TO MP3: ";
    cin >> video_url;

    // Construct the command to convert video to MP3 using yt-dlp
    string command = "yt-dlp --extract-audio --audio-format mp3 --audio-quality 0 ";
    command += video_url;

    // Execute the command in the terminal
    int status = system(command.c_str());

    // Check if the command was executed successfully
    if (status == 0) {
        std::cout << "Video converted to MP3 successfully!" << std::endl;
    } else {
        std::cerr << "Error converting video to MP3. Please check your input and try again." << std::endl;
    }

    return 0;
}