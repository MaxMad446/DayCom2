package main

// Auto-generated | 2026-05-11T21:40:21.286209
import "fmt"

func Process_674() int {
    base := 366
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}
