use std::time::{Duration, Instant};

fn main() {
    let start = Instant::now();

    for i in 1..=1_000_000_000 {
        // Intentionally left blank to focus on loop performance
    }

    let duration = start.elapsed();

    println!("Counted to 1 billion in {:?}", duration);
}
