<h1>42 LIBFT</h1>
<br>
<p>This repo is a library of functions made in C where most of them are replicas of standard libc, some are sugestions and others are my own idea</p>
<p>As it is part of 42cursus the functions writing follows rules stabilished by the Norme V3 of École 42</p>
<p>If you found this repo because you're also a 42 student (or a science computer student at all), feel free to look at this repo for your reference, but keep in mind that to be a good programmer you must be able to code your own functions</p>
<br>
<h2>Documentation</h2>
<br>
<p>Documentation for this project is divided per group of functions. Such groups are: ft char; ft list; ft memory; ft numeric; ft string; ft write</p>
<br>
<h3>ft char</h3>
<p>The functions of this group are used to process char (arrays of chars or strings are treated in ft string group). By process char, must made clear that, to convert a lowercase letter to an upper case correspondent is to process char, but test if it is digit or alphabetic is also process char as the functions must test an input and generate an output</p>
<br>
<h4>ft_isalnum</h4>
<p>ft isalnum receives an int that represents an ascii character index (or not really), and test if it is an alphabetic character or a digit character by comparing its value with the range of alphabetic characters and digit characters in ascii table.</p>
<p>Case the value is between those ranges returns 1, otherwise returns 0 as integer value.</p>
<br>
<h4>ft_isalpha</h4>
<p>ft isalpha receives an int that represents an ascii character index (or not really), and test if it is an alphabetic character by comparing its value with the range of alphabetic characters in ascii table.</p>
<p>Case the value is between this range returns 1, otherwise returns 0 as integer value.</p>
<br>
<h4>ft_isascii</h4>
<p>ft isascii receives an int that represents an ascii character index (or not really), and test if it is an ascii character by comparing its value with the range of characters in ascii table.</p>
<p>Case the value is between this range returns 1, otherwise returns 0 as integer value.</p>
<br>
<h4>ft_isdigit</h4>
<p>ft isdigit receives an int that represents an ascii character index (or not really), and test if it is a digit character by comparing its value with the range of digit characters in ascii table.</p>
<p>Case the value is between this range returns 1, otherwise returns 0 as integer value.</p>
<br>
<h4>ft_isprint</h4>
<p>ft isprint receives an int that represents an ascii character index (or not really), and test if it is a printable character by comparing its value with the range of printable characters (from 32 up to 126) in ascii table.</p>
<p>Case the value is between this range returns 1, otherwise returns 0 as integer value.</p>
<br>
<h4>ft_tolower</h4>
<p>ft tolower receives an int that represents an ascii character index (or not really), and see if it is an alphabetic character and is between the lower case alphabetic characters range. Case positive, it turns this character to an upper case correpondent and returns it as integer value</p>
<br>
<h4>ft_toupper</h4>
<p>ft toupper receives an int that represents an ascii character index (or not really), and see if it is an alphabetic character and is between the upper case alphabetic characters range. Case positive, it turns this character to an lower case correpondent and returns it as integer value</p>
<br>
