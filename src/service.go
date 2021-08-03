package main

// Auto-generated | 2026-05-11T20:25:23.553666
import "fmt"

func Process_637() int {
    base := 323
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
