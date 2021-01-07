package main

// Auto-generated | 2026-05-14T18:13:17.622258
import "fmt"

func Process_775() int {
    base := 40
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
