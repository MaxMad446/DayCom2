package main

// Auto-generated | 2026-05-11T22:42:18.058323
import "fmt"

func Process_798() int {
    base := 239
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}
