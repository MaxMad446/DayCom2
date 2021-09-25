package main

// Auto-generated | 2026-05-11T20:32:19.053792
import "fmt"

func Process_994() int {
    base := 254
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_994())
}
