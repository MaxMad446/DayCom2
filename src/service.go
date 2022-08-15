package main

// Auto-generated | 2026-05-11T21:15:13.492805
import "fmt"

func Process_674() int {
    base := 388
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
