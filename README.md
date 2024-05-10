## MP3 Converter Explanation

This C++ program converts a video to MP3 using yt-dlp, a command-line program to download videos from YouTube and other sites. Below is an explanation of how the program works:

### How it Works

1. **User Input**: The program prompts the user to input the URL of the video they want to convert to MP3.

2. **Command Construction**: The program constructs a command string to be executed in the terminal. The command includes `yt-dlp` with parameters `--extract-audio` to extract the audio from the video, `--audio-format mp3` to specify the output format as MP3, and `--audio-quality 0` to set the audio quality to the highest possible.

3. **Command Execution**: The constructed command is executed in the terminal using the `system()` function.

4. **Output**: If the command executes successfully (returns a status of 0), the program informs the user that the video has been converted to MP3. If there is an error during conversion, an error message is displayed.

### Prerequisites

- **Ubuntu operating system**: The program is designed to run on Ubuntu.
- **yt-dlp installed**: Ensure `yt-dlp` is installed on your system. You can install it using `sudo pip install yt-dlp`.

### Usage

1. **Clone Repository**: Clone this repository to your local machine.
2. **Compile Program**: Compile the C++ program using a C++ compiler. Example: `g++ -o video_to_mp3_converter video_to_mp3_converter.cpp`.
3. **Run Program**: Run the compiled program. Example: `./video_to_mp3_converter`.
4. **Input URL**: Enter the URL of the video you want to convert to MP3 when prompted.
5. **Conversion**: The program will convert the video to MP3 using `yt-dlp`.

### License


This project is licensed under the MIT License. See the [LICENSE](LICENSE) file 
for details.

### Code Explanation

The C++ program provided performs the conversion of a video to MP3 using yt-dlp. Below is an explanation of the code:

- **#include \<iostream\>**: This line includes the input/output stream library, allowing the program to interact with the user through the terminal.

- **#include \<cstdlib\>**: This line includes the C Standard Library, providing functions for performing system-related operations.

- **int main()**: This is the main function where the program execution begins.

- **std::string video_url**: Declares a string variable `video_url` to store the URL of the video provided by the user.

- **std::cout << "Enter the URL of the video you want to convert to MP3: "**: Displays a message prompting the user to enter the URL of the video.

- **std::cin >> video_url**: Reads the input from the user (video URL) and stores it in the `video_url` variable.

- **std::string command = "yt-dlp --extract-audio --audio-format mp3 --audio-quality 0 "**: Constructs a command string to convert the video to MP3 using yt-dlp. It includes parameters such as `--extract-audio` to extract the audio, `--audio-format mp3` to specify the output format as MP3, and `--audio-quality 0` to set the audio quality to the highest possible.

- **command += video_url**: Appends the provided video URL to the command string.

- **int status = system(command.c_str())**: Executes the constructed command in the terminal using the `system()` function and stores the exit status of the command in the `status` variable.

- **if (status == 0)**: Checks if the command was executed successfully (exit status 0).

  - **std::cout << "Video converted to MP3 successfully!" << std::endl;**: If the command executed successfully, displays a success message indicating that the video has been converted to MP3.

- **else**:

  - **std::cerr << "Error converting video to MP3. Please check your input and try again." << std::endl;**: If there was an error during conversion, displays an error message prompting the user to check their input and try again.

- **return 0**: Indicates successful program execution and terminates the
-  main function.
