#include <stdio.h>
#include <qrencode.h>


int main() {
    const char *text = "Hello, QR Code!"; // Text to encode in the QR code
    
    // Create a QR code from the text
    QRcode *qrcode = QRcode_encodeString(text, 0, QR_ECLEVEL_L, QR_MODE_8, 1);
    
    if (qrcode == NULL) {
        printf("Error generating QR code\n");
        return 1;
    }

    // Print QR code to console (ASCII art)
    for (int y = 0; y < qrcode->width; y++) {
        for (int x = 0; x < qrcode->width; x++) {
            if (qrcode->data[y * qrcode->width + x] & 0x01) {
                printf("##");  // Print black block
            } else {
                printf("  ");  // Print white block
            }
        }
        printf("\n");
    }

    // Free the memory allocated for the QR code
    QRcode_free(qrcode);
    
    return 0;
}
