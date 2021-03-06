
#ifndef KATA_H
#define KATA_H

typedef struct Kata Kata;

Kata *kata_init_values(char *val1, char *val2);
char *kata_check_special_case(char * inputArray, char * specialCase, char * conversionValue);
char *kata_convert_low_to_high(char * outputArray);
char *kata_substitute_subtractives_back(char * inputArray);
char *kata_check_subtractives(char * inputArray, char * specialCase, char * conversionValue);
char *kata_substitute_subtractives(char * val);
char *kata_search_for_char(char * input, char * searchChar);
char *kata_arrang_concatenated_input(char * val1, char * val2);
char *kata_search_and_remove_val1(char * inputVal, char removeVal);
char *kata_search_and_remove_val2(char * inputVal, char removeVal);
char *kata_remove_like_values(char * val1, char * val2);
char *kata_check_if_value_is_greater_than_max(char * val, char * max);
char *kata_sub_checker(Kata * k);
char *kata_add(Kata * k);
char *kata_sub(Kata * k);
void kata_free(Kata *k);

#endif /* KATA_H */
