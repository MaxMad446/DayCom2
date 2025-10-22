package main

// Auto-generated | 2026-05-12T04:31:53.336397
import "fmt"

func Process_570() int {
    base := 497
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
