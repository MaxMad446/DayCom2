package main

// Auto-generated | 2026-05-14T18:14:48.645275
import "fmt"

func Process_921() int {
    base := 66
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_921())
}
