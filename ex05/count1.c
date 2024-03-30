#include <stdio.h> // stdio.h gives us printf
#include <string.h> // string.h gives us strlen


/* The purpose of this program is to convert a dna string into its
reverse complement as follows: the whole string is reversed from the
original, and additionally each base (character) is converted to its
complement: A <-> T, C <-> G.
Example: original == "ACTTAG"  reverse complement == "CTAAGT"
*/

int main() {
    // "dna" holds beginning of human mitochrondrial genome sequence
    const char dna[] = "GATCACAGGTCTATCACCCTATTAACCACTCACGGGAGCTCTCCATGCAT"
                       "TTGGTATTTTCGTCTGGGGGGTGTGCACGCGATAGCATTGCGAGACGCTG"
                       "GAGCCGGAGCACCCTATGTCGCAGTATCTGTCTTTGATTCCTGCCTCATT"
                       "CTATTATTTATCGCACCTACGTTCAATATTACAGGCGAACATACCTACTA"
                       "AAGTGTGTTAATTAATTAATGCTTGTAGGACATAATAATAACAATTGAAT";

    // Note: above is one long string literal, wrapped across lines

    // strlen is a function that returns the length of the string
    int dna_len = strlen(dna);

    // create array to hold the reverse complement, leaving an extra element
    // for the null character since it's not part of the reported length
    char rev_comp[dna_len+1];   

    int rci = 0;  //index into reverse complement array
    char c;
    int A = 65;
    int C = 67;
    int G = 71;
    int T = 84;
    // TODO: set the value of rev_comp[rci] for every valid index
    while(rci < dna_len){
        c = dna[rci];
        if(dna[rci] == A || dna[rci] == T){
            rev_comp[rci] = ((int)dna[rci] == A) ? T : A;
        }else{
            rev_comp[rci] = ((int)dna[rci] == G) ? C : G;
        }
        rci++;
    }
    rev_comp[rci+1] = 0x00;
    //AT
    //GC 
    if(dna[0] == (65 | 85)){
        printf("%s","WHY");
    }
    // TODO: add the null character to the end of rev_comp




    // output results
    printf("original: %s\n", dna);
    printf("rev_comp: %s\n", rev_comp);

    return 0;
}
