---
layout: course_bootstrap_project
title: CSC 696H Fall 2023
permalink: /courses/csc696fa23/
---


## CSC 696H: Topics in Bandits and Reinforcement Learning Theory (Fall 2023)

Many modern applications such as e-commerce, robotics, healthcare, autonomous driving, can be viewed as sequential decision making problems: 
a learning agent learns to take a sequence of actions that maximizes its reward. Of these, bandit problems (and its contextual variant) concerns decision 
making with independent observations, where the learner only sees the rewards of its taken action; 
reinforcement learning (RL) generalizes bandits in taking into account the temporal dependencies of the observations, 
therefore allowing the learning of intelligent behavior that maximizes long-term returns. 
This course will study bandits and RL from a theoretical perspective: when and how can we design bandits and RL algorithms 
with provable guarantees? Specifically, we will look at recent advances in this area, such as principled exploration in bandits and RL, 
in tabular and function approximation settings; policy optimization in RL; offline RL. In the first part of this course, 
students will learn the necessary mathematical background (such as concentration inequalities, online learning, 
Markov Decision Processes, optimization tools) for the design and analysis of bandits and RL algorithms. 
In the second part of this course, each registered student will present a recent paper on bandit or RL theory. 

### Logistics info

Time and venue: TuTh 3:30pm-4:45pm, Gould-Simpson 701

[D2L course webpage](https://d2l.arizona.edu/d2l/home/1356552): lecture video recordings can be found at "UA Tools" -> "Panopto"

[Syllabus](syllabus.pdf)

We will be using Piazza to make important announcements and do Q&As. Please self-enroll [here](https://piazza.com/arizona/fall2023/csc696h). Note:

* If you have technical questions, try posing your questions as general as possible to promote discussions.
* If you have private questions, unless necessary, please make a private Piazza post instead of sending me an email. 

### Instructor

[Chicheng Zhang](https://zcc1307.github.io/)

Office: Gould-Simpson 720

Office Hours: TBD

### Textbook

Main references:

[Reinforcement Learning: Theory and Algorithms](https://rltheorybook.github.io/rltheorybook_AJKS.pdf), by Alekh Agarwal, Nan Jiang, Sham Kakade, and Wen Sun (AJKS);

[Bandit algorithms](https://tor-lattimore.com/downloads/book/book.pdf), by Tor Lattimore and Csaba Szepesvari (LS);

[Mathematical Analysis of Learning Algorithms](https://tongzhang-ml.org/lt-book.html) by Tong Zhang (TZ); 

[Bandits and RL](https://people.cs.umass.edu/~akshay/courses/coms6998-11/index.html) by Akshay Krishnamurthy (AK);

[Statistical Reinforcement Learning and Decision Making](https://www.mit.edu/~rakhlin/course-decision-making.html) by Dylan Foster and Sasha Rakhlin (FR)

Additional references:

[Introduction to Multi-Armed Bandits](https://arxiv.org/pdf/1904.07272.pdf) by Alex Slivkins

[Reinforcement learning: an introduction](https://www.andrew.cmu.edu/course/10-703/textbook/BartoSutton.pdf) by Richard Sutton and Andrew Barto

[RL theory virtual seminars](https://sites.google.com/view/rltheoryseminars/home) by Gergely Neu, Ciara Pike-Burke, and Csaba Szepesvari

### Review for prerequisites

Notes for
[probability review](http://cs229.stanford.edu/section/cs229-prob.pdf) 
and [linear algebra review](http://cs229.stanford.edu/section/cs229-linalg.pdf)
(from Stanford CS 229).

Some general guidance in approaching theory-related questions: 
[Street Fighting Mathematics](https://www.youtube.com/watch?v=qP4XEZ54eSc&list=PLm3J0oaFux3ZYpFLwwrlv_EHH9wtH6pnX&index=3) 
by Ryan O'Donnell. 

See also [The matrix cookbook](https://www.math.uwaterloo.ca/~hwolkowi/matrixcookbook.pdf), 
[The Probability and Statistics Cookbook](http://statistics.zone/), 
and [Calculus cheatsheet](https://tutorial.math.lamar.edu/pdf/calculus_cheat_sheet_all.pdf).

### Scribing and LaTeX
We will be using the following [scribe note LaTeX template file](scribe_template.tex) and [style file](definitions.sty). 
See also [Prof. Rob Schapire's suggestions on preparing scribe notes](https://www.cs.princeton.edu/courses/archive/spring19/cos511/scribeinfo.html). 
Please sign up for one scribing slot at the sign up sheet.

Some useful LaTeX resources: [Learn LaTeX in 30 minutes by Overleaf](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#Adding_math_to_LaTeX); [Introduction to LATEX by MIT Research Science Institute](http://web.mit.edu/rsi/www/pdfs/new-latex.pdf)


### Presentation 
All registered students will be asked to give an in-class presentation on a 
Bandits / RL theory paper of their choice; please sign up for one presentation 
slot at the sign up sheet. See the [Presentation](presentation.html) page for more details.

### Reinforcement learning theory courses at other institutions

Many courses offered at other institutions have good (and vastly diverse) lecture materials; here are a few examples:

[Bandits and RL](http://alekhagarwal.net/bandits_and_rl/) by Alekh Agarwal and Alex Slivkins

[Reinforcement Learning](http://chercheurs.lille.inria.fr/~lazaric/Webpage/MVA-RL_Course16.html) by Alessandro Lazaric

[Foundations of Reinforcement Learning](https://sites.google.com/view/cjin/ele524) by Chi Jin

[Theoretical Foundations of Reinforcement Learning](https://rltheory.github.io/pages/lectures/) by Csaba Szepesvari

[Statistical Reinforcement Learning](https://nanjiang.cs.illinois.edu/cs598/) by Nan Jiang

[Foundations of Reinforcement Learning](https://wensun.github.io/CS6789.html) by Wen Sun and Sham Kakade


### Useful tutorials

[COLT 2021 Tutorial: Statistical Foundations of Reinforcement Learning](https://rltheorybook.github.io/colt21tutorial) by Akshay Krishnamurthy and Wen Sun

[AAAI 2020 and ALT 2019 Tutorials: Exploration-Exploitation in Reinforcement Learning](https://rlgammazero.github.io/) by Ronan Fruit, Mohammad Ghavamzadeh, Alessandro Lazaric, and Matteo Pirotta
