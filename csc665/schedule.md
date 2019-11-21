### CSC 665 Section 2: Machine Learning Theory - Fall 2019

Tentative schedule:



|Date  | Topics | Notes | Additional Readings  | Homework |
|:---:|:------------:|:---:|:---:|:---:|
|Aug 27 | Introduction, motivation, course mechanics | [slides](notes/slides.pdf) [probability review](notes/prob_review.pdf) | SSBD App B.1 and B.2 | [HW0 (Calibration)](hw/hw0/hw0.pdf) [tex file](hw0/hw0.tex) |
|Aug 29 | Concentration of measure | [concentration of measure note 1](notes/conc_1.pdf) | SSBD App B.4 | |
|Sep 3  | Chernoff bound for Bernoulli random variables, McDiarmid's Inequality | [concentration of measure note 2](notes/conc_2.pdf) | SSBD App B.3, Lemma 26.4 | HW0 due in class [HW0 Solutions](hw/hw0/hw0sol.pdf) |
|Sep 5  | The PAC learning framework, finite classes | [PAC learning note](notes/pac.pdf) | SSBD Chap 2, Sec 3.1 | |
|Sep 10 | Agnostic PAC learning, infinite classes | | SSBD Sec 3.2-3.3, Chap 4, Sec 6.1 | |
|Sep 12 | VC Theory, Sauer's Lemma | [VC Theory note](notes/vc.pdf) | SSBD Sec 6.2 - 6.5.1 |  |
|Sep 17 | Rademacher complexity | [Uniform convergence / Rademacher complexity note](notes/rad.pdf) | SSBD Sec 6.5.2, 26.1, 28.1 | [HW1](hw/hw1/hw1.pdf) [tex file](hw/hw1/hw1.tex) [HW1 Solutions](hw/hw1/hw1sol.pdf) |
|Sep 19 | Information-theoretic lower bounds of PAC learning |  | SSBD 28.2.1  | |
|Sep 24 | Le Cam's method |  | SSBD 28.2.1 | |
|Sep 26 | Assouad's method, fundamental theorem of statistical learning | [Lower bound note](notes/lower_bound.pdf) | SSBD Sec 28.2.2, Sec 5.1  | [HW2](hw/hw2/hw2.pdf) [tex file](hw/hw2/hw2.tex) [HW2 Solutions](hw/hw2/hw2sol.pdf) |
|Oct 1  | Support Vector Machine (SVM); the maximum margin hyperplane problem  | | SSBD Chap 15, Secs 26.2, 26.3 | |
|Oct 3  | Soft margin, nonlinear mapping, the dual of SVM  | | SSBD Sec 15.4 | |
|Oct 8  | Kernel trick | | SSBD Chap 16 | |
|Oct 10 | Margin bounds, generalization bounds of SVM | | SSBD Sec 26.3 | |
|Oct 15 | Proof of margin bounds via Rademacher complexity | [SVM note](notes/svm.pdf) | SSBD Secs 26.2, 26.4 | |
|Oct 17 | Model selection, structural risk minimization | [Model selection note](notes/model_sel.pdf) | SSBD Chap 7, [Modern bias-variance tradeoff](https://arxiv.org/pdf/1812.11118.pdf) | [Midterm (take home)](hw/midterm/midterm.pdf) [Midterm solutions](hw/midterm/midterm_sol.pdf) |
|Oct 22 | Boosting: AdaBoost | | SSBD Chap 10 | |
|Oct 24 | Boosting and margin bound; two styles of margin bounds | [Boosting note](notes/boosting.pdf) | SSBD Sec 26.2, [Boosted ResNet paper](https://arxiv.org/pdf/1706.04964.pdf) | |
|Oct 29 | Intro to Online learning; Online classification | | SSBD Sec 21.1 |  [HW3](hw/hw3/hw3.pdf) |
|Oct 31 | Minimax analysis: Littlestone's dimension; Expert problem | | SSBD Sec 21.1.1 | |
|Nov 5 | Cover's Impossibility Result; Decision-theoretic online learning. | | SSBD Sec 21.2 | |
|Nov 7 | Hedge; Online to Batch conversion. | | SSBD Sec 21.2.1, [Hedge paper](http://rob.schapire.net/papers/FreundSc95.pdf); [Loss range adaptivity](https://arxiv.org/abs/1801.00101) | |
|Nov 12 | Convexity, subgradients | | | |
|Nov 14 | Subgradients, norms | | | |
|Nov 19 | Lipschitzness, strong convexity and smoothness | |  | [HW4](hw/hw4/hw4.pdf) |
|Nov 21 | Legendre-Fenchel conjugacy, online convex optimization, Follow the regularized leader | | | |
|Nov 26 | Stochastic linear bandits (1) | | LS Chap 19 | |
|Nov 28 | No Class. Thanksgiving Holiday! | | | |
|Dec 3 | Stochastic linear bandits (2) | | LS Chap 20 | |
|Dec 5 | Final presentation (1) | | | |
|Dec 10 | Final presentation (2) | | | |

[//]: # (|Sep 26 | Structural risk minimization | | SSBD Chap 7 | |)
[//]: # (SSBD Chap 10, Sec 26.2)
[//]: # (|Oct 22 | Online classification | | SSBD Sec 21.1 | |)
[//]: # (|Oct 24 | Online convex optimization (OCO): online to batch conversion | | SSBD Sec 21.3, Sections 14.1-14.3  | |)
[//]: # (Follow the regularized leader (FTRL) | | H Sec 5.3 |)
[//]: # (Online mirror descent (OMD) | | H Sec 5.2 | |)
[//]: # (|Nov 5 | Online convex optimization for strongly-convex / exp-concave functions | | H Sec 3.3, Chap 4  | |
|Nov 7 | Prediction with expert advice (1) | | SSBD Sec 21.2 | |
|Nov 12 | Prediction with expert advice (2) | | | |
|Nov 14 | Stochastic multi-armed bandits (1) | | LS Chaps 6, 7 | |
|Nov 19 | Stochastic multi-armed bandits (2) | |  | |
|Nov 21 | Adversarial multi-armed bandits | | LS Chap 11 | |)
