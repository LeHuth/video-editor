extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}

int main(int argc, char* argv[]) {
    printf("Hello, World!\n");
    if (argc != 2) {
        printf("Usage: %s <input file>\n", argv[0]);
        return -1;
    }

    // Open the media file.
    AVFormatContext* pFormatContext = avformat_alloc_context();
    if (avformat_open_input(&pFormatContext, argv[1], NULL, NULL) != 0) {
        printf("Could not open file: %s\n", argv[1]);
        return -1;
    }

    // Retrieve stream information.
    if (avformat_find_stream_info(pFormatContext, NULL) < 0) {
        printf("Could not find stream information.\n");
        return -1;
    }

    // Print detailed information about the input or output format.
    av_dump_format(pFormatContext, 0, argv[1], 0);

    // Clean up and close the media file.
    avformat_close_input(&pFormatContext);

    return 0;
}
