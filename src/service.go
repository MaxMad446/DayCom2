package main

// Auto-generated | 2026-05-12T04:44:16.257640
import "fmt"

func Process_739() int {
    base := 323
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
