all: main_program \
 rule_001_compliant \
 rule_001_non_compliant \
 rule_002_compliant \
 rule_002_non_compliant \
 rule_003_non_compliant

main_program: main.c
	gcc -o main_program main.c -std=c99 -Wall -pedantic

rule_001_compliant: rule_001_compliant.c
	gcc -o rule_001_compliant rule_001_compliant.c -std=c99 -Wall -pedantic

rule_001_non_compliant: rule_001_non_compliant.c
	gcc -o rule_001_non_compliant rule_001_non_compliant.c -std=c99 -Wall -pedantic

riule_002_compliant: rule_002_compliant.c
	gcc -o rule_002_compliant rule_002_compliant.c -std=c99 -Wall -pedantic

rule_002_non_compliant: rule_002_non_compliant.c
	gcc -o rule_002_non_compliant rule_002_non_compliant.c -std=c99 -Wall -pedantic

rule_003_non_compliant: rule_003_non_compliant.c
	gcc -o rule_003_non_compliant rule_003_non_compliant.c -std=c99 -Wall -pedantic