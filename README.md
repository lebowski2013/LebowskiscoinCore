<h1 align="center">
<img src="[https://lebowskiscoinfoundation.org/images/logo.png](https://lebowskiscoinfoundation.org/images/lebowskiscoin-logo.avif)" data-canonical-src="[https://lebowskiscoinfoundation.org/images/logo.png](https://lebowskiscoinfoundation.org/images/lebowskiscoin-logo.avif)" width="250" height="250" alt="LebowskisCoin"/>
<br/><br/>
LebowskisCoin [LBW]
</h1>

<div align="center">

[![LebowskisCoinBadge](https://img.shields.io/badge/LebowskisCoin-Coin-blue)](https://lebowskiscoinfoundation.org)
[![MuchWow](https://img.shields.io/badge/OG-Coin-yellow.svg)](https://lebowskiscoinfoundation.org)


## Why 2.0.0?
This repo have been made in an experiment to revive the lebowskiscoin chain. It includes an upgraded version of the Bitcoin protocol that is required to run mempool, electrs and more. Please note that changes done to this version have not been tested under any circumstance and should not be used with tokens. Use at your OWN risks. The developper(s) are not responsible for your actions.

## This branch contains the latest version 2.0.0 of the Lebowskiscoin network.

Lebowskiscoin Client v2.0.0
=======================

Lebowskiscoin - a fork of Litecoin version with random bonus blocks. Like Litecoin it uses scrypt as a proof of work scheme.

- 1 min block target
- Difficulty retargets every 20 min with accelerated diff adjustment in the beginning
- Initially 88 coins per block, halves every 2 months (100,000 blocks)
- Total around 20 millions coins
- connection port is 9917, RPC-port 9918

Random Super-blocks:
For the 1st 50000 blocks (1st month)
- 5% chances 188 coins/block
- 1% chances 588 coins/block
- 0.01% chances 5888 coins/block (so expect 5 such blocks)

    After 50000 blocks
    - 5% chances 2 times the normal coins (i.e. if normal is 88 coins, you get 176 coins)
    - 1% chances 5 times the normal coins
    - 0.01% chance 58 times the normal coins


Official Lebowskiscoin Website and Community Forum
==================================

Please visit the official Lebowskiscoin website for more information.
https://lebowskiscoinfoundation.org


Development process
===================

Developers work in their own trees, then submit pull requests when
they think their feature or bug fix is ready.

The patch will be accepted if there is broad consensus that it is a
good thing.  Developers should expect to rework and resubmit patches
if they don't match the project's coding conventions (see coding.txt)
or are controversial.

The master branch is regularly built and tested, but is not guaranteed
to be completely stable. Tags are regularly created to indicate new
official, stable release versions of Lebowskiscoin.

Feature branches are created when there are major new features being
worked on by several people.

From time to time a pull request will become outdated. If this occurs, and
the pull is no longer automatically mergeable; a comment on the pull will
be used to issue a warning of closure. The pull will be closed 15 days
after the warning if action is not taken by the author. Pull requests closed
in this manner will have their corresponding issue labeled 'stagnant'.

Issues with no commits will be given a similar warning, and closed after
15 days from their last activity. Issues closed in this manner will be
labeled 'stale'. 
