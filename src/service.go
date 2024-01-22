package main

// Auto-generated | 2026-05-11T22:23:25.352698
import "fmt"

func Process_674() int {
    base := 397
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
