��       �     �   �  ,      �   ~  �  p  h   �  �   F  �   I  �        0  9     j     |     �   ,  �     �   %  �   ,  !   -  N      |   &  �     �     �   L     J  Q   -  �   5  �   (      L  )     v   D  �   ?  �   B     D  X     �   I  �   =     A  E   J  �   =  �   8     9  I   C  �   F  �   (     @  7   B  x   M  �   K  	   8  U   ,  �   J  �   9     /  @   0  p   K  �   $  �   G     )  Z  V  �   9  �        G  4   A  |   <  �   .  �   C  *   ,  n   ?  �   <  �   E      B   ^   %   �   5   �   F   �   .  !D   >  !s   >  !�   A  !�   8  "3   3  "l   #  "�   /  "�   D  "�   /  #9   4  #i   �  #�   !  $�     $�   !  $�     $�   I  %   &  %O     %v     %�   I  %�   1  %�   &  &)     &P     &g     &�     &�   $  &�     &�     &�     '
     '     '$     '>     ']   #  'm     '�   '  '�   �  '�   =  (�   '  (�     (�     (�   %  )     )-     )B     )T     )f     )x   "  )�   4  )�     )�   .  )�   "  *)   (  *L   *  *u     *�   )  *�   !  *�   '  *�   )  +'     +Q     +h      +x      +�     +�     +�   	  +�  A  +�     -<     -O     -T     -i   1  -{   2  -�   0  -�     .   #  .,     .P   )  .l   1  .�   -  .�     .�     /     /'     /:     /K     /Y   "  /t   %  /�     /�     /�     /�     /�   	  /�     0     0     0     0,     0<   !  0[     0}     0�   
  0�     0�  I  0�   x  2	  �  2�   �  4	   K  4�   C  5   &  5V   :  5}     5�     5�     5�   4  6     6B   1  6_   4  6�   5  6�     6�   2  7     7O     7l   �  7�   �  8   5  8�   N  8�   2  9"   e  9U   %  9�   K  9�   C  :-   K  :q   C  :�   *  ;   {  ;,   C  ;�   H  ;�   N  <5   O  <�   E  <�   L  =   D  =g   M  =�   (  =�   S  >#   p  >w     >�   �  ?h   ?  @   =  @B   F  @�   L  @�   <  A   <  AQ   �  A�   )  B   L  BF   0  B�  �  B�   9  D�     D�   a  E   -  Ep   A  E�   3  E�   H  F      F]   =  F~   I  F�   B  G   M  GI   "  G�   E  G�   F  H    4  HG   3  H|   J  H�   <  H�   6  I8   E  Io   4  I�   <  I�   v  J'   7  J�   N  J�    K%     L=     LY     Ly     L�   _  L�   (  M     MB     M[   ?  Mv   >  M�   1  M�     N'     N7   "  NS     Nv   ,  N�     N�     N�     N�     O     O   *  O<     Og   +  Ox   #  O�   -  O�   �  O�   E  P�   %  P�     Q   $  Q    ?  QE     Q�     Q�     Q�     Q�     Q�   (  Q�   4  R   "  RB   :  Re   "  R�   *  R�   )  R�   %  S   "  S>   #  Sa   ,  S�   0  S�   (  S�     T   )  T#   )  TM   -  Tw   #  T�     T�  �  T�     Vj     V�     V�     V�   @  V�   8  V�   5  W.   "  Wd   +  W�   !  W�   2  W�   :  X   7  XC   !  X{   "  X�     X�     X�     X�     X�     Y   8  Y3     Yl     Y}     Y�     Y�     Y�     Y�     Y�     Y�     Y�   -  Y�   )  Z#     ZM   *  Z_     Z�     Z�      P              �   Q   V   �       /          �   �          S   �   �   ;       o   "   @   �   F   r                      �   �   �   2      G   1           A       y   O   |   �   Y   f   )       k   4   �   �   g           H   L   0   :      \   `   X       �          8   %   Z   <       i   #              N   .   ~               �   ]   q   d          -       {   p       b      6       �   �       7   ,          a   B                 
   �               �   �   U       T       �   t      x   }              s   �               '   �   D              [   J       �   C   �   �   =   �   K   v       !   $   j      �         �      �   9           	   h       �       �         �   M          �   �          I   E   �   �   �   _   n          >       �   ^   &   (       �   +   W           *       �      e   R       �   w      �       �       3       c   �   �   u   5       z   �   m   �   l   ?   �      �      Either GFMT or LFMT may contain:
    %%  %
    %c'C'  the single character C
    %c'\OOO'  the character with octal code OOO   GFMT may contain:
    %<  lines from FILE1
    %>  lines from FILE2
    %=  lines common to FILE1 and FILE2
    %[-][WIDTH][.[PREC]]{doxX}LETTER  printf-style spec for LETTER
      LETTERs are as follows for new group, lower case for old group:
        F  first line number
        L  last line number
        N  number of lines = L-F+1
        E  F-1
        M  L+1   LFMT may contain:
    %L  contents of line
    %l  contents of line, excluding any trailing newline
    %[-][WIDTH][.[PREC]]{doxX}n  printf-style spec for input line number   LTYPE is `old', `new', or `unchanged'.  GTYPE is LTYPE or `changed'.   Skip the first SKIP1 bytes of FILE1 and the first SKIP2 bytes of FILE2. %s %s differ: byte %s, line %s
 %s %s differ: byte %s, line %s is %3o %s %3o %s
 %s: diff failed:  %s: illegal option -- %c
 %s: invalid option -- %c
 %s: option `%c%s' doesn't allow an argument
 %s: option `%s' is ambiguous
 %s: option `%s' requires an argument
 %s: option `--%s' doesn't allow an argument
 %s: option `-W %s' doesn't allow an argument
 %s: option `-W %s' is ambiguous
 %s: option requires an argument -- %c
 %s: unrecognized option `%c%s'
 %s: unrecognized option `--%s'
 --GTYPE-group-format=GFMT  Similar, but format GTYPE input groups with GFMT. --LTYPE-line-format=LFMT  Similar, but format LTYPE input lines with LFMT. --binary  Read and write data in binary mode. --diff-program=PROGRAM  Use PROGRAM to compare files. --from-file and --to-file both specified --from-file=FILE1  Compare FILE1 to all operands.  FILE1 can be a directory. --help  Output this help. --horizon-lines=NUM  Keep NUM lines of the common prefix and suffix. --ignore-file-name-case  Ignore case when comparing file names. --line-format=LFMT  Similar, but format all input lines with LFMT. --no-ignore-file-name-case  Consider case when comparing file names. --normal  Output a normal diff. --speed-large-files  Assume large files and many scattered small changes. --strip-trailing-cr  Strip trailing carriage return on input. --tabsize=NUM  Tab stops are every NUM (default 8) print columns. --to-file=FILE2  Compare all operands to FILE2.  FILE2 can be a directory. --unidirectional-new-file  Treat absent first files as empty. -3  --easy-only  Output unmerged nonoverlapping changes. -A  --show-all  Output all changes, bracketing conflicts. -B  --ignore-blank-lines  Ignore changes whose lines are all blank. -D NAME  --ifdef=NAME  Output merged file to show `#ifdef NAME' diffs. -D option not supported with directories -E  --ignore-tab-expansion  Ignore changes due to tab expansion. -E  --show-overlap  Output unmerged changes, bracketing conflicts. -H  --speed-large-files  Assume large files and many scattered small changes. -I RE  --ignore-matching-lines=RE  Ignore changes whose lines all match RE. -L LABEL  --label=LABEL  Use LABEL instead of file name. -N  --new-file  Treat absent files as empty. -S FILE  --starting-file=FILE  Start with FILE when comparing directories. -T  --initial-tab  Make tabs line up by prepending a tab. -W  --ignore-all-space  Ignore all white space. -X  Output overlapping changes, bracketing them. -X FILE  --exclude-from=FILE  Exclude files that match any pattern in FILE. -a  --text  Treat all files as text. -b  --ignore-space-change  Ignore changes in the amount of white space. -b  --print-bytes  Print differing bytes. -c  -C NUM  --context[=NUM]  Output NUM (default 3) lines of copied context.
-u  -U NUM  --unified[=NUM]  Output NUM (default 3) lines of unified context.
  --label LABEL  Use LABEL instead of file name.
  -p  --show-c-function  Show which C function each change is in.
  -F RE  --show-function-line=RE  Show the most recent line matching RE. -d  --minimal  Try hard to find a smaller set of changes. -e  --ed  Output an ed script. -e  --ed  Output unmerged changes from OLDFILE to YOURFILE into MYFILE. -i  --ignore-case  Consider upper- and lower-case to be the same. -i  --ignore-case  Ignore case differences in file contents. -i  Append `w' and `q' commands to ed scripts. -i SKIP  --ignore-initial=SKIP  Skip the first SKIP bytes of input. -i SKIP1:SKIP2  --ignore-initial=SKIP1:SKIP2 -l  --left-column  Output only the left column of common lines. -l  --paginate  Pass the output through `pr' to paginate it. -l  --verbose  Output byte numbers and values of all differing bytes. -m  --merge  Output merged file instead of ed script (default -A). -n  --rcs  Output an RCS format diff. -n LIMIT  --bytes=LIMIT  Compare at most LIMIT bytes. -o FILE  --output=FILE  Operate interactively, sending output to FILE. -q  --brief  Output only whether files differ. -r  --recursive  Recursively compare any subdirectories found. -s  --quiet  --silent  Output nothing; yield exit status only. -s  --report-identical-files  Report when two files are the same. -s  --suppress-common-lines  Do not output common lines. -t  --expand-tabs  Expand tabs to spaces in output. -v  --version  Output version info. -w  --ignore-all-space  Ignore all white space. -w NUM  --width=NUM  Output at most NUM (default 130) print columns. -x  --overlap-only  Output overlapping changes. -x PAT  --exclude=PAT  Exclude files that match PAT. -y  --side-by-side  Output in two columns.
  -W NUM  --width=NUM  Output at most NUM (default 130) print columns.
  --left-column  Output only the left column of common lines.
  --suppress-common-lines  Do not output common lines. Common subdirectories: %s and %s
 Compare files line by line. Compare three files line by line. Compare two files byte by byte. FILES are `FILE1 FILE2' or `DIR1 DIR2' or `DIR FILE...' or `FILE... DIR'. File %s is a %s while file %s is a %s
 Files %s and %s are identical
 Files %s and %s differ
 If --from-file or --to-file is given, there are no restrictions on FILES. If a FILE is `-' or missing, read standard input. If a FILE is `-', read standard input. Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression Memory exhausted No match No newline at end of file No previous regular expression Only in %s: %s
 Premature end of regular expression Regular expression too big Report bugs to <bug-gnu-utils@gnu.org>. SKIP values may be followed by the following multiplicative suffixes:
kB 1000, K 1024, MB 1,000,000, M 1,048,576,
GB 1,000,000,000, G 1,073,741,824, and so on for T, P, E, Z, Y. SKIP1 and SKIP2 are the number of bytes to skip in each file. Side-by-side merge of file differences. Success Trailing backslash Try `%s --help' for more information. Unknown system error Unmatched ( or \( Unmatched ) or \) Unmatched [ or [^ Unmatched \{ Usage: %s [OPTION]... FILE1 FILE2
 Usage: %s [OPTION]... FILE1 [FILE2 [SKIP1 [SKIP2]]]
 Usage: %s [OPTION]... FILES
 Usage: %s [OPTION]... MYFILE OLDFILE YOURFILE
 `-%ld' option is obsolete; omit it `-%ld' option is obsolete; use `-%c %ld' `-' specified for more than one input file block special file both files to be compared are directories cannot compare `-' to a directory cannot compare file names `%s' and `%s' cannot interactively merge standard input character special file cmp: EOF on %s
 conflicting %s option value `%s' conflicting output style options conflicting tabsize options conflicting width options directory ed:	Edit then use both versions, each decorated with a header.
eb:	Edit then use both versions.
el:	Edit then use the left version.
er:	Edit then use the right version.
e:	Edit a new version.
l:	Use the left version.
r:	Use the right version.
s:	Silently include common lines.
v:	Verbosely include common lines.
q:	Quit.
 extra operand `%s' fifo incompatible options input file shrank internal error: invalid diff type in process_diff internal error: invalid diff type passed to output internal error: screwup in format of diff blocks invalid --bytes value `%s' invalid --ignore-initial value `%s' invalid context length `%s' invalid diff format; incomplete last line invalid diff format; incorrect leading line chars invalid diff format; invalid change separator invalid horizon length `%s' invalid tabsize `%s' invalid width `%s' memory exhausted message queue missing operand after `%s' options -l and -s are incompatible pagination not supported on this host program error read failed regular empty file regular file semaphore shared memory object socket stack overflow standard output subsidiary program `%s' failed subsidiary program `%s' not found symbolic link too many file label options weird file write failed Project-Id-Version: diffutils 2.8.3
Report-Msgid-Bugs-To: 
POT-Creation-Date: 2004-04-13 00:07-0700
PO-Revision-Date: 2002-06-24 13:27+0400
Last-Translator: Oleg S. Tihonov <tihonov@ffke-campus.mipt.ru>
Language-Team: Russian <ru@li.org>
MIME-Version: 1.0
Content-Type: text/plain; charset=koi8-r
Content-Transfer-Encoding: 8bit
   ��� ���� � ���� ����� ���������:
    %%  %
    %c'�'  ���� ������ �
    %c'\OOO'  ���� ������ � ������������ ����� OOO   ���� ����� ���������:
    %<  ������ �� �����1
    %>  ������ �� �����2
    %=  ������, ����� ��� �����1 � �����2
    %[-][������][.[����]]{doxX}�����  ������ ��� ����� � ����� printf
      ����� ��������� ��������� �������� ��� ����� �����, ��� ������ ��������:
        F  ����� ������ ������
        L  ����� ��������� ������
        N  ����� ����� = L-F+1
        E  F-1
        M  L+1   ���� ����� ���������:
    %L  ���������� ������
    %l  ���������� ������, �������� ��� ����� ������ � �����
    %[-][������][.[����]]{doxX}n  ������ ������ ������� ������ � ����� printf   ���� ����� ���� `old', `new', ��� `unchanged', ���� -- �� �� � `changed'. ���������� ������ �1 ���� ����� ����1 � ������ �2 ���� ����� ����2. %s %s �����������: ���� %s, ������ %s
 %s %s �����������: ���� %s, ������ %s ����� %3o %s %3o %s
 %s: ����� �������� ���������:  %s: ������������ ���� -- %c
 %s: �������� ���� -- %c
 %s: ���� `%c%s' ������ �������������� ��� ���������
 %s: ������������� ���� `%s'
 %s: ���� `%s' ������ �������������� c ����������
 %s: ���� `--%s' ������ �������������� ��� ���������
 %s: ���� `-W %s' ������ �������������� ��� ���������
 %s: ������������� ���� `-W %s'
 %s: ���� %c ������ �� �������������� c ����������
 %s: ����������� ���� `%c%s'
 %s: ����������� ���� `--%s'
 --����-group-format=����  ����������, �� ������������� ������� ������ ���� ����
                          � ������������ � �������� ����. --����-group-format=����  ����������, �� ������������� ������� ������ ���� ����
                          � ������������ � �������� ����. --binary  ������ � ���������� ����� � �������� �����. --diff-program=���������  ������������ ��� ������� ������ ��������� ���������. ���������� ������ ��� --from-file, ��� � --to-file --from-file=����1  �������� ����1 �� ����� ����������.
                   ����1 ����� ���� ���������. --help  �������� ��� ������� � �����. --horizon-lines=�����  �������� ����� ����� ����� �� � ����� �������������. --ignore-file-name-case  ������������ ������� ���� � ������ ������. --line-format=����  ����������, �� ������������� ��� ������� ������ � ����. --no-ignore-file-name-case  ��������� ������� ���� � ������ ������. --normal  �������� � ������� ������� diff. --speed-large-files  ������������, ��� ����� ������� �� �������
                         ������������� ������� �����������. --strip-trailing-cr  ������� �� ������ ����������� ������� �������. --tabsize=�����  ��������� ����� �������� ����� ������ (�� ��������� 8). --to-file=����2  �������� ��� �������� � ������2.  ����2 ����� ���� ���������. --unidirectional-new-file  ������������ �������������� ������ ����� ��� ������. -3  --easy-only  �������� �� ������������ ���������������� ���������. -A  --show-all  �������� ��� ���������, �������� ����������� ����� � ������. -B  --ignore-blank-lines  ������������ ��������� ����� ������ �����. -D ���  --ifdef=���  �������� �������, ������������ ����������� `#ifdef ���'. -D option not supported with directories -E  --ignore-tab-expansion  ������������ ���������, ��������� ���������� ���������. -E  --show-overlap  �������� �� ������������ ���������,
                    �������� ����������� ����� � ������. -H  --speed-large-files  ������������, ��� ����� ������� �� �������
                         ������������� ������� �����������. -I ��  --ignore-matching-lines=��  ������������ ���������, ������ �������
                        ��������� ������������� ��������� ����������� ��������� -L �����  --label=�����  ������������ ����� ������ ����� �����. -N  --new-file  ������������ �������������� ����� ��� ������. -S ����  --starting-file=����  ��� ��������� ��������� ������ � �����. -T  --initial-tab  ����������� ��������� �������� � ������ ������ ���������. -W  --ignore-all-space  ������������ ��� ���������� �������. -X  �������� �������������� ���������, �������� �� � ������. -X ����  --exclude-from=����  ��������� �����, ��� ����� ��������� � �����-����
                              �������� �� ���������� � �����. -a  --text  ������� ��� ����� ����������. -b  --ignore-space-change  ������������ ��������� ����� ���������� ��������. -b  --print-bytes  �������� ������������� �����. -c  -C �����  --context[=�����]  ���������� ����� (�� ��������� 3) ����� ���������.
-u  -U �����  --unified[=�����]  �������� ����� (�� ��������� 3) �����
                                 ������������� ���������.
  -L �����  --label �����  ������������ ����� ������ ����� �����.
  -p  --show-c-function  ���������� C-�������, ���������� ���������.
  -F ��  --show-function-line=��  ���������� �������������� ������, �����������
                                  � �������� ���������� ����������. -d  --minimal  �������� ����� ���������� ����� ���������. -e  --ed  �������� �������� ed. -e  --ed  �������� �� ������������ ��������� � ������-����� �� ������-�����
          � ���-����. -i  --ignore-case  ������������ ������� ����. -i  --ignore-case  ������������ ������� ���� � ���������� ������. -i  �������� ������� `w' � `q' � ����� �������� ed. -i �  --ignore-initial=�  ������������ �������� � ������ � ������ �����. -i �1:�2  --ignore-initial=�1:�2 -l  --left-column  �������� ������ ����� ������� ����� �����. -l  --paginate  ��������� ����� ��������� `pr' ��� ��������� �� ��������. -l  --verbose  �������� ������ � �������� ���� ������������� ����. -m  --merge  �������� ������������ ���� ������ �������� ed (�� ��������� -A). -n  --rcs  �������� � ������� RCS. -n ������  --bytes=������  ���������� �� ����� ���������� ����� ����. -o ����  --output=����  �������� ������������, ��������� ����� � ����. -q  --brief  ���������� ������ ����������� �� �����. -r  --recursive  ���������� ���������� �����������. -s  --quiet  --silent  �� ��������, ������ �������� ������������ ��������. -s  --report-identical-files  �������� �� ���������� ������. -s  --suppress-common-lines  �� �������� ����� ������. -t  --expand-tabs  ���������� ��� ������ ������� ��������� � �������. -v  --version  �������� ���������� � ������ � �����. -w  --ignore-all-space  ������������ ��� ���������� �������. -w �����  --width=�����  �������� �������� �������� ����� ������ � ������.
                         (�� ��������� 130) -x  --overlap-only  �������� ��������������� ���������. -x ������� --exclude=�������  ��������� �����, ��� ����� ��������� � ��������. -y  --side-by-side  �������� � ��� �������.
  -W �����  --width=�����  �������� �������� �������� ����� ������ � ������.
                           (�� ��������� 130)
  --left-column  �������� ������ ����� ������� ����� �����.
  --suppress-common-lines  �� �������� ����� ������. ����� �����������: %s � %s
 ��������� ���������� ��� �����. ��������� ���������� ��� �����. ��������� ���������� ��� �����. ����� ��� `����1 ����2', ��� `�������1 �������2', ��� `������� ����...',
��� `����... �������'. ���� %s ��� %s, ����� ��� ���� %s -- %s
 ����� %s � %s ���������
 ����� %s � %s �����������
 ���� ����� --from-file ��� --to-file, �� ����� ��� �����������. ���� ���� �� ����� ��� ����� ��� `-', ������ ����������� ����. ���� ���� ����� ��� `-', ������ ����������� ����. �������� ������ �������� ��� ������ ������� ������������ ��� ���������� ������ �������� ���������� \{\} �������� �������������� ���������� ��������� �������� ������ ������ �������� ���������� ��������� ����������� ������ ��������� ���������� ��� � ����� ����� ��� ����� ������ ���������� ��������� �� ���� ������ ������ ������ � %s: %s
 ��������������� ����� ����������� ��������� ���������� ��������� ������� ������ �� ������� ��������� <bug-gnu-utils@gnu.org>. � ��������� � ����� ����������� ���� �� ��������� ������������ ���������:
kB 1000, K 1024, MB 1,000,000, M 1,048,576,
GB 1,000,000,000, G 1,073,741,824, � ��� ����� ��� T, P, E, Z, Y. �1 � �2 -- ��� ����� ����, ������� ������� ���������� � ������ �����. ������������ ������� �������� ������. ����� �������� ����� ����� ����� ��������� ���������� `%s --help' ��� ��������� ����� ���������� ��������. ����������� ��������� ������ �������� ( ��� \( �������� ) ��� \) �������� [ ��� [^ �������� \{ �������������: %s [����]... ����1 ����2
 �������������: %s [����]... ����1 [����2 [�1 [�2]]]
 �������������: %s [����]... �����
 �������������: %s [����]... ���-���� ������-���� ���-����
 ���� `-%ld' �������; ��������� ��� ���� `-%ld' �������; ����������� `-%c %ld' `-' ����� ��� ����� ������ �������� ����� ����������� ���� � ��������� �������� ��� ������������ ����� -- �������� ���������� �������� `-' � ��������� ���������� �������� ����� ������ `%s' � `%s' ���������� ������������ ������� ����������� ���� ����������� ���� � ������������ �������� cmp: ����� ����� � %s
 �������������� �������� %s ��� ����� `%s' �������������� ����� ������� ����� ������ �������������� ����� ������� ������ ��������� �������������� ����� ������� ������ ������� ed:	������������� � ������������ ��� ������, ������� � ������ ���������.
eb:	������������� � ������������ ��� ������.
el:	������������� � ������������ ����� ������.
er:	������������� � ������������ ������ ������.
e:	������������ ����� ������.
l:	������������ ������ ������.
r:	������������ ������ ������.
s:	�������� ����� ������, �� ������� ���������.
v:	�������� ����� ������, ������� ���������.
q:	�����.
 �������� ������� `%s' ������� ������������� ����� ������� ���� ���������� ���������� ������: �������� ��� ������� � ������� `process_diff' ���������� ������: �� ����� ������� �������� ��� ������� ���������� ������: ������������ ������ ������ ������� ������������ �������� --bytes `%s' ������������ �������� --ignore-initial `%s' ������������ ����� ��������� `%s' �������� ������ �������; �������� ��������� ������ �������� ������ �������; ����������� ������ ������� ������ �������� ������ �������; �������� ����������� ��������� ������������ ����� ��������� `%s' ������������ ������ ��������� `%s' ������������ ������ `%s' ������ ��������� ������� ��������� �������� ������� ����� `%s' ����� -l � -s ������������ ��������� �� �������� �� �������������� �� ������ ������ ������ ��������� ������ ��������� ������� ������ ���� ������� ���� ������� ����������� ������ ����� ������������ ����� ����������� ����� �������� ��������� `%s' ����������� ��������� �� ������� ��������������� ��������� `%s' ���������� ������ ������� ����� ������ �������� ����� ������ �������� ���� ������ ��������� 