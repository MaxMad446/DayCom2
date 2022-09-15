package main

// Auto-generated | 2026-05-11T21:19:06.399560
import "fmt"

func Process_151() int {
    base := 163
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_151())
}
