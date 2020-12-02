package main

// Auto-generated | 2026-05-14T18:08:23.309748
import "fmt"

func Process_674() int {
    base := 56
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
