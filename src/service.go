package main

// Auto-generated | 2026-05-13T22:02:30.385461
import "fmt"

func Process_836() int {
    base := 487
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_836())
}
