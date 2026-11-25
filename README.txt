APM EQUILIBRIUM SOLVER — QUICK START

1. Extract this ZIP.
2. Open the extracted folder in VS Code.
3. Open index.html in a browser (or use the VS Code Live Server extension).
4. Select Concurrent / Non-concurrent and open each question.

C++ REQUIREMENT
- equilibrium.cpp is the C++ calculation core.
- It can be compiled to WebAssembly with Emscripten:
  em++ equilibrium.cpp -O2 -s WASM=1 -s EXPORTED_FUNCTIONS="['_resultant_magnitude','_resultant_angle_deg','_component_x','_component_y']" -s EXPORTED_RUNTIME_METHODS="['ccall','cwrap']" -o equilibrium.js
- The current website is a static question viewer and includes the C++ source. The WebAssembly build is not precompiled in this package.

PUBLISH A SHAREABLE LINK (GitHub Pages)
1. Create/sign in to GitHub and create a new PUBLIC repository named apm-equilibrium-solver.
2. Upload all files and the assets folder from this extracted project.
3. In repository Settings → Pages, choose Deploy from a branch.
4. Select branch main and folder /(root), then Save.
5. GitHub will show your public website URL after deployment.

IMPORTANT
- The photos and handwritten results are reproduced from your uploads.
- Some handwritten calculations may contain rounding or arithmetic errors. Check them with your lecturer before final submission.
- This package is a ready-to-run website project, but it is not yet hosted; a public link is created only after you publish it.
