#ifndef UTILIDADES_H
#define UTILIDADES_H

    #define C_RESET       "\033[0m"       // Clear
    #define C_BOLD        "\033[1m"       // Bold
    #define C_BLACK       "\033[30m"      // Black
    #define C_RED         "\033[31m"      // Red
    #define C_GREEN       "\033[32m"      // Green
    #define C_YELLOW      "\033[33m"      // Yellow
    #define C_BLUE        "\033[34m"      // Blue
    #define C_MAGENTA     "\033[35m"      // Magenta
    #define C_CYAN        "\033[36m"      // Cyan
    #define C_WHITE       "\033[37m"      // White

   typedef enum _tipo_msg_t {
        OK, ERROR, WARNING, INFO
    } tipo_msg_t;

    extern void print_msg(tipo_msg_t, const char*, const char*);
    extern const char *get_str_tipo_msg(tipo_msg_t);

#endif