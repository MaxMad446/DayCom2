package main

// Auto-generated | 2026-05-13T22:01:40.622878
import "fmt"

func Process_512() int {
    base := 398
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_512())
}
