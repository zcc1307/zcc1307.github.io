### CSC 588: Machine Learning Theory - Spring 2021

#### Tentative schedule

|Date  | Topics | Scribe notes | Additional readings  | Homework |
|:---:|:------------:|:---:|:---:|:---:|
| Jan 14 | Introduction, motivation, course mechanics | | SSBD App B.1 and B.2 | [HW0 (calibration)](hw/CSC_588_HW_1.pdf) |
| Jan 19  | The PAC learning framework |  |  |  |
| Jan 21  |  |  |  |  |
| Jan 26  | Concentration inequalities: Hoeffding's inequality |  |  |  |
| Jan 28  | VC theory |  |  |  |
| Feb 2  |  |  |  |  |
| Feb 4  |  |  |  |  |
| Feb 9  |  |  |  |  |
| Feb 11  |  |  |  |  |
| Feb 16  |  |  |  |  |
| Feb 18  |  |  |  |  |
| Feb 23  | Regularization and Stability |  |  |  |
| Feb 25  | No class - Reading day |  |  |  |
| Mar 2  |  |  |  |  |
| Mar 4  |  |  |  |  |
| Mar 9  | No class - Reading day |  |  |  |
| Mar 11  | Online learning, online convex optimization |  |  |  |
| Mar 16  |  |  |  |  |
| Mar 18  |  |  |  |  |
| Mar 23  |  |  |  |  |
| Mar 25 |  |  |  |  |
| Mar 30  |  |  |  |  |
| Apr 1  |  |  |  |  |
| Apr 6  | Multi-armed bandits, linear bandits, MDPs |  |  |  |
| Apr 8  |  |  |  |  |
| Apr 13  |  |  |  |  |
| Apr 15  |  |  |  |  |
| Apr 20  |  |  |  |  |
| Apr 22  |  |  |  |  |
| Apr 27  |  |  |  |  |
| Apr 29  | Project presentation I |  |  |  |
| May 4  | Project presentation II |  |  |  |


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
|Nov 21 | Adversarial multi-armed bandits | | LS Chap 11 | |
LS Chap 19
|Dec 3 | Stochastic linear bandits (2) | | LS Chap 20 | |
|Aug 27 | Introduction, motivation, course mechanics | [slides](notes/slides.pdf) [probability review](notes/prob_review.pdf) | SSBD App B.1 and B.2 | HW0 |
|Aug 29 | Concentration of measure | [concentration of measure note 1](notes/conc_1.pdf) | SSBD App B.4 | |
|Sep 3  | Chernoff bound for Bernoulli random variables, McDiarmid's Inequality | [concentration of measure note 2](notes/conc_2.pdf) | SSBD App B.3, Lemma 26.4 | HW0 due in class |
|Sep 5  | The PAC learning framework, finite classes | [PAC learning note](notes/pac.pdf) | SSBD Chap 2, Sec 3.1 | |
|Sep 10 | Agnostic PAC learning, infinite classes | | SSBD Sec 3.2-3.3, Chap 4, Sec 6.1 | |
|Sep 12 | VC Theory, Sauer's Lemma | [VC Theory note](notes/vc.pdf) | SSBD Sec 6.2 - 6.5.1 |  |
|Sep 17 | Rademacher complexity | [Uniform convergence / Rademacher complexity note](notes/rad.pdf) | SSBD Sec 6.5.2, 26.1, 28.1 | HW1 |
|Sep 19 | Information-theoretic lower bounds of PAC learning |  | SSBD 28.2.1  | |
|Sep 24 | Le Cam's method |  | SSBD 28.2.1 | |
|Sep 26 | Assouad's method, fundamental theorem of statistical learning | [Lower bound note](notes/lower_bound.pdf) | SSBD Sec 28.2.2, Sec 5.1  | HW2 |
|Oct 1  | Support Vector Machine (SVM); the maximum margin hyperplane problem  | | SSBD Chap 15, Secs 26.2, 26.3 | |
|Oct 3  | Soft margin, nonlinear mapping, the dual of SVM  | | SSBD Sec 15.4 | |
|Oct 8  | Kernel trick | | SSBD Chap 16 | |
|Oct 10 | Margin bounds, generalization bounds of SVM | | SSBD Sec 26.3 | |
|Oct 15 | Proof of margin bounds via Rademacher complexity | [SVM note](notes/svm.pdf) | SSBD Secs 26.2, 26.4 | |
|Oct 17 | Model selection, structural risk minimization | [Model selection note](notes/model_sel.pdf) | SSBD Chap 7, [Modern bias-variance tradeoff](https://arxiv.org/pdf/1812.11118.pdf) | Midterm (take home) |
|Oct 22 | Boosting: AdaBoost | | SSBD Chap 10 | |
|Oct 24 | Boosting and margin bound; two styles of margin bounds | [Boosting note](notes/boosting.pdf) | SSBD Sec 26.2, [Boosted ResNet paper](https://arxiv.org/pdf/1706.04964.pdf) | |
|Oct 29 | Intro to Online learning; Online classification | | SSBD Sec 21.1 |  HW3 |
|Oct 31 | Minimax analysis: Littlestone's dimension; Expert problem | [Online classification note](notes/online_cls.pdf) | SSBD Sec 21.1.1 | |
|Nov 5 | Cover's Impossibility Result; Decision-theoretic online learning. | [Handwritten notes](notes/online_handwritten.pdf) | SSBD Sec 21.2 |  |
|Nov 7 | Hedge; Online to Batch conversion. | [Online to batch conversion notes](notes/online_to_batch.pdf) | SSBD Sec 21.2.1, [Hedge paper](http://rob.schapire.net/papers/FreundSc95.pdf); [Loss range adaptivity](https://arxiv.org/abs/1801.00101) | |
|Nov 12 | Convexity, subgradients | | SSBD Sec 12.1, 14.2 | |
|Nov 14 | Bregman divergence, norms, dual norms | | | |
|Nov 19 | Lipschitzness, strong convexity and smoothness | | SSBD Sec 12.1, 13.3 | HW4 |
|Nov 21 | Legendre-Fenchel conjugacy, online convex optimization, Follow the regularized leader (FTRL) | [OCO note](notes/oco.pdf) | Section 2.7, 2.3 of [Shalev-Shwartz's Survey](https://www.cs.huji.ac.il/~shais/papers/OLsurvey.pdf) | |
|Nov 26 | Analysis of FTRL; FTRL Examples | | H Sec 5.3 | |
|Nov 28 | No Class. Thanksgiving Holiday! | | | |
|Dec 3 | Online linear classification with margins; FTRL with Adaptive regularization | | Section 3.3 of [Shalev-Shwartz's Survey](https://www.cs.huji.ac.il/~shais/papers/OLsurvey.pdf); H Sec 5.6 | |
|Dec 5 | Adagrad, online optimization of strongly convex functions | | H Sec 3.3 | |
|Dec 10 | Final presentation | | | [Topics to review](notes/study_guide.pdf) |
)
